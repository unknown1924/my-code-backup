import sys

words = ["zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twentyone","twentytwo","twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty","thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","thirtyeight","thirtynine","forty","fortyone","fortytwo","fortythree","fortyfour","fortyfive","fortysix","fortyseven","fortyeight","fortynine","fifty","fiftyone","fiftytwo","fiftythree","fiftyfour","fiftyfive","fiftysix","fiftyseven","fiftyeight","fiftynine","sixty","sixtyone","sixtytwo","sixtythree","sixtyfour","sixtyfive","sixtysix","sixtyseven","sixtyeight","sixtynine","seventy","seventyone","seventytwo","seventythree","seventyfour","seventyfive","seventysix","seventyseven","seventyeight","seventynine","eighty","eightyone","eightytwo","eightythree","eightyfour","eightyfive","eightysix","eightyseven","eightyeight","eightynine","ninety","ninetyone","ninetytwo","ninetythree","ninetyfour","ninetyfive","ninetysix","ninetyseven","ninetyeight","ninetynine","hundred"]
noOfVowels = [2,2,1,2,2,2,1,2,2,2,1,3,2,3,4,3,3,4,4,4,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2]

def getPairsCount(arr, n, sum):

    m = [0] * 1000

    for i in range(0, n):
        m[arr[i]]
        m[arr[i]] += 1

    twice_count = 0

    # Iterate through each element and increment
    # the count (Notice that every pair is
    # counted twice)
    for i in range(0, n):

        twice_count += m[sum - arr[i]]

        # if (arr[i], arr[i]) pair satisfies the
        # condition, then we need to ensure that
        # the count is  decreased by one such
        # that the (arr[i], arr[i]) pair is not
        # considered
        if (sum - arr[i] == arr[i]):
            twice_count -= 1

    # return the half of twice_count
    return int(twice_count / 2)
n = int(input())
inp = input().split();
inp = [int(x) for x in inp]
print(inp)
countPairs = 0
sumOfVowels = 0
for i in range(0, len(inp)):
    sumOfVowels += noOfVowels[inp[i]]
print(sumOfVowels)

countPairs = getPairsCount(inp, n, sumOfVowels)
print(words[countPairs])
