a, b = gets.split
a = a.to_i
b = b.to_i
cnt = 0
while a > 0
  a -= b
  cnt += 1
end
puts cnt