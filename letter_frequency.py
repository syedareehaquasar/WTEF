import matplotlib.pyplot as plt

a2z = "abcdefghijklmnopqrstuvwxyz"


def preprocess(s):
    return " ".join(lines for lines in s)

def frequency(s):
    return [s.lower().count(each_letter) for each_letter in a2z]

def graph(x, y):
    plt.plot(x, y)
    plt.ylabel('frequency')
    plt.xlabel('letters')
    plt.title('frequency of each letter')
    return plt.show()

def barchart(x, y):
    plt.bar(x, y, color = "red")
    plt.ylabel('frequency')
    plt.xlabel('letters')
    plt.title('frequency of each letter')
    return plt.show()


s = preprocess(open('warandpeace.txt'))

xcomp = [letters for letters in a2z]

barchart(xcomp, frequency(s))
graph(xcomp, frequency(s))