#학생별로 인덱싱
#제출안한 2명 찾는 프로그램

#입력을 받을 때 반복문을 써서 
#임의의 리스트 생성후 반복문 이용해서 추가한다.
#리스트의 길이 를 설정 후 in not in을 써서 해당 숫자가 없을 때 출력하게 만들다.
list_of_num=[]
i=0
while i<28 :
    val = int(input())
    if 1 <= val <= 30: 
        list_of_num.append(val)
    else :
        continue
    i+=1
for itr in range(1,31):
    if itr in list_of_num:
        continue
    else:
        print( itr)
