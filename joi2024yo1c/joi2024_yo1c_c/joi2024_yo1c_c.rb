n=gets.to_i
s=gets
tmp=s[0]
for i in 0...n
  if tmp!=s[i]
    puts "No"
    return
  end
end
puts "Yes"