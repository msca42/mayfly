/*
  a
  i *= j + 1
  i = i * (j+1) 
  i = 63 j = 8
  b
  i += j += k
  i = i + (j= j + k)
  k = 1 j = 2 i = 3
  c
  i -= j -= k 
  i = i -(j= j - k)
  k = 3 j = - 1  i= 2
  d 
  i *= j *= k
  i = i * (j = j*k)
  k = 0 j = 0 i = 0
*/