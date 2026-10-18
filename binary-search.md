# Binary Search Variants — Revision Sheet

General skeletons:
- Exact target search: `while (low <= high)`, shrink with `mid±1`, return index or -1.
- Converge-to-answer: `while (low < high)`, keep candidate via `high = mid`, return `nums[low]`.

## 1. Search in Rotated Sorted Array (distinct values, LC 33)
Branch condition: which half is *sorted* → `nums[low] <= nums[mid]` ? left sorted : right sorted.
Range check decides side: target in `[nums[low], nums[mid]]` → left, else right.
Trick: "sorted half + contains-target test."

## 2. Search in Rotated Sorted Array II (duplicates, LC 81)
All of #1, plus: if `nums[low] == nums[mid] == nums[high]` you can't tell → shrink `low++, high--`.
Trick: "duplicates defeat the sorted-half test → pay O(n) worst case by inching."

## 3. Find Minimum / Count Rotations (LC 153)
Compare `nums[mid]` to `nums[high]` (NOT `nums[low]` — ambiguous).
`nums[mid] > nums[high]` → min right → `low = mid+1`; else → `high = mid`.
Rotations = index of min.
Trick: "compare against the far end to locate the drop."

## 4. Single Element in a Sorted Array (LC 540)
Pair parity flips at the anomaly: before it pairs start at even indices, after it odd.
Check partner of mid on its normal side: even & nums[mid]==nums[mid+1] → right; odd & nums[mid]==nums[mid-1] → right; else → left (`high = mid` or `mid-1`).
Trick: "parity flip = anomaly boundary."

## 5. Peak Element (LC 162)
Don't find the peak; follow the slope.
`nums[mid] < nums[mid+1]` → uphill → right (`low = mid+1`); else → left (`high = mid`).
Trick: "search for the slope, not the answer."

## 6. Binary Search on Answer (LC 69 sqrt, 875 Koko, ...)
Two signals:
1. Problem asks for min/max: "smallest x such that..." / "minimum capacity/speed/days".
2. You can write a cheap `isFeasible(candidate)` check.

Then verify **monotonicity**: feasibility looks like `no, no, ..., yes, yes` (or reversed).
- Search over the *value range* (0..n), not the input array.
- Keep best feasible answer in `ans`; push boundary toward a better one; shrink the other way.
- Beware overflow: compare `mid*mid <= n` as `(long long)mid*mid <= n` or use `mid <= n/mid`.

Checklist for a new problem: searching a value or an array? → define range, check monotonic, write the check.
Trick: "min/max + monotonic check = binary search the answer."

## 7. Minimum Time to Complete Trips (LC 2187)
Given an array `time` where `time[i]` is the minutes bus `i` needs for one trip, and an integer `totalTrips`. Find the minimum integer time `t` such that the total trips completed by all buses by time `t` is at least `totalTrips`.

- **Answer**: minimum `t` with `Σ floor(t / time[i]) ≥ totalTrips`.
- **Search space**: `low = 1`, `high = min(time) * totalTrips` (tightest safe upper bound; you can also use `max(time) * totalTrips`).
- **Feasibility check**: `trips = 0; for each t_i: trips += t / t_i; return trips ≥ totalTrips`.
- **Monotonicity**: `f(t) = Σ floor(t / time[i])` is non‑decreasing in `t`; if `f(t) ≥ totalTrips` then any larger `t` also works.
- **Binary‑search skeleton** (while `low < high`):
  ```cpp
  while (low < high) {
      int mid = low + (high - low) / 2;
      long long trips = 0;
      for (int t_i : time) trips += mid / t_i;
      if (trips >= totalTrips) high = mid;
      else low = mid + 1;
  }
  return low;
  ```
- **Trick**: “total trips = sum of integer divisions; upper bound with `min(time) * totalTrips` shrinks the search interval.”
