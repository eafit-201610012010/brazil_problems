1.upto 11 do |i|
  system "./antigray.2 < in.#{i} > myout"
  system "ruby check.rb < myout"
  system "rm myout"
end