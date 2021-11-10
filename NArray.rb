require "narray"

score1 = NArray.to_na( [65, 80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 25, 85, 46, 42, 78, 62, 84, 70])

score2 = NArray.to_na([44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84 ])

puts "笑介くんのクラス20人のテストの点数は、理科が"
score1.each do |i|
  print "#{i} "
end

puts "\n英語が"
score2.each do |j|
  print "#{j} "
end

puts "でした。"
puts "理科と英語のそれぞれについて、平均点、標準偏差値、合計点を求めよ。"
puts "それぞれの人について、理科と英語の偏差値を求めよ。"
puts "さらに、理科と英語のそれぞれについて点数の高い順に並べ替えなさい。"

puts "\n平均点"
print "理科:"
p ave1 = score1.mean
print "英語:"
p ave2 = score2.mean

puts "\n標準偏差値"
print "理科:"
s=0
score1.each do |i| 
  s = s +(i - ave1) * (i - ave1)
end
p Math.sqrt(s / score1.total)

print "英語:"
e = 0
score2.each do |j|
  e = e + (j - ave2) * (j - ave2)
end
p Math.sqrt(e / score2.total)

puts "\n合計点"
print "理科:"
sum1 = 0
score1.each do |i|
  sum1 = sum1 + i
end
p sum1

print "英語:"
sum2 = 0
score2.each do |j|
  sum2 = sum2 + j
end
p sum2

puts "\nソート"
print "理科:"
score1.sort.each do |i|
  print "#{i} "
end

print "\n英語:"
score2.sort.each do |j|
  print "#{j} "
end 





