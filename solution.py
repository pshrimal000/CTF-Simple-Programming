number_of_lines=input()
maincount=0
while number_of_lines:
    number=input()
    count0=0
    count1=0
    while number>0:
        x=number%10
        if x==0:
            count0=count0+1
        else:
            count1=count1+1
        number=number/10
    if count0%3==0 or count1%2==0:
        maincount=maincount+1
    number_of_lines=number_of_lines-1
print maincount
