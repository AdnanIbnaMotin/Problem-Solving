def ST():
    s = raw_input().lower()
    v = 'aeiouy'
    l = str()
    for i in range(len(s)):
            if s[i] in v:
                    continue
            else:
                    l += '.' + s[i]
    print(l)

ST()
