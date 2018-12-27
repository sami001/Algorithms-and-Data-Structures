#find the first x for which f(x) is true

binary_search(lo, hi, p):
   while lo < hi:
      mid = lo + (hi-lo)/2
      if p(mid) == true:
         hi = mid
      else:
         lo = mid+1

   if p(lo) == false:
      complain                // p(x) is false for all x in S!
   return lo         // lo is the least x for which p(x) is true
   
#find the last x for which f(x) is false

binary_search(lo, hi, p):
   while lo < hi:
      mid = lo + (hi-lo+1)/2    // note: division truncates
      if p(mid) == true:
         hi = mid-1
      else:
         lo = mid

   if p(lo) == true:
      complain                // p(x) is true for all x in S!
   return lo         // lo is the greatest x for which p(x) is false
