#등급 딕셔너리 생성
def change(text):
    grade_to_score_dict={"A+":4.5,"A0":4.0,"B+":3.5,"B0":3.0,"C+":2.5,"C0":2.0,"D+":1.5,"D0":1.0,"F":0.0}
    return grade_to_score_dict[text]
def sum(list1):
    sum=0
    for itr in list1:
        sum += itr
    return sum

def main():
    #1. 20번 반복해야 한다 whlie loop이용
    score_list = [ 1.0, 2.0, 3.0 , 4.0]
    i=0
    up_list=[]
    down_list=[]
    while i<2:
    #2. 입력 받은 roe를 띄어쓰기로 구분해서 두번쨰 인자와 세번째 인자만
        row = str(input())
        each_val_list = (row.rstrip()).split(" ")
        if 1<= len(each_val_list[0]) <=50:
            if float(each_val_list[1]) in score_list:
                if each_val_list[2] != "P":
                    down_list.append(float(each_val_list[1]))
                    changed_val = change(each_val_list[2])
                    up_list.append(float(each_val_list[1])*changed_val)
        i+=1

    result = sum(up_list) / sum(down_list)
    print(result)
    return None
if __name__=="__main__":
    main()
# 다차원 배열로 다시 해보기
    