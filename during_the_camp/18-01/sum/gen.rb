n = 50#_000
max = 10**9
puts n
n.times do |i|
  if rand(2) == 0
    print "+ "
    puts rand(max) + 1
  else
    l = rand(max) + 1
    r = rand(max) + 1
    l, r = r, l if r < l
    print "? "
    print l
    print " "
    puts r
  end
end