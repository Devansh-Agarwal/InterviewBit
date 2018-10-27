int Solution::reverse(int A) {
    int temp =0 , temp2 = abs(A),temp3= 0;
        bool flag = true;
        int count = 0;
        while(temp2>0)
        {
            if(temp2%10 == 0 && flag)
                count++;
            if(temp2%10 !=0)
             flag = false;
            temp = temp*10 + temp2%10;
            temp2/=10;
        }
        temp2 = temp;
        while(temp2>0)
        {
            temp3 = temp3*10 + temp2%10;
            temp2/=10;
        }
        temp3 = temp3 * pow(10,count);
        if(temp3 != abs(A))
            return 0;
        if(A<0)
            temp = temp * -1;
    return temp;        
}
