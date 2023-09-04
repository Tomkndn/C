package JAVA;
public class exp1 {
    public static void main(String[] args) {
        int num1=16,num2=24,temp=1,init=0;
        if (num1 > num2) {
            init = num2;
        } else {
            init = num1;
        }

        // for (int i = init; i >= 1; i--) {
            int i = init;
            while (i>=1) {
            if (num1 % i == 0 && num2 % i == 0) {
                temp = i;
                i--;
                break;
            }
        }
        System.out.println("Your HCF will be: "+temp);
    }
}