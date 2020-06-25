import matplotlib.pyplot as plt
import numpy

def preprocess(s):
    return " ".join(lines for lines in s)


s = preprocess(open('warandpeace.txt'))


a2z = "abcdefghijklmnopqrstuvwxyz"
objects = [letters for letters in a2z]
frequency = [s.lower().count(each_letter) for each_letter in a2z]
y_pos = numpy.arange(len(objects))

plt.bar(y_pos, frequency, align = 'center', alpha = 0.5)
plt.xticks(y_pos, objects)
plt.ylabel('frequency')
plt.xlabel('letters')
plt.title('frequency of each letter')

plt.show()
print(frequency)