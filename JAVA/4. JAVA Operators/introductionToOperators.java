//! Operators -> it is used to perform operations on variable
//? Type of operator
//?    1.Arthmetic operator
//?    2.Assignment operator
//?    3.Comparison operator
//?    4.Logical operator
//?    5.Bitwise operator





public class introductionToOperators {
    public static void main(String[] args) {

        int num1=10;
        int num2=5;
        int num3=3;

// todo : 1. Arthmetic operator ("+","-","*","/","%","++","--")

        //* Addition
        System.out.println("Addion : "+(num1+num2));

        //* Subtraction
        System.out.println("Subtract : "+(num1-num2));

        //* Multiplication
        System.out.println("Multiplication : "+(num1*num2));

        //* Division
        System.out.println("Divison(return quotient) : "+(num1/num2));

        //* Modulus
        System.out.println("Modulus(return remainder) : "+(num1%num3));

        //* Increment
        System.out.println("Increment : "+(++num1));

        //* Decrement
        System.out.println("Decrement : "+(--num2));


// todo : 2.Assignment Operator("=","+=","-=","*=","/=","%=","&=","|=","^=",">>=","<<=")

        /*
         * x += 3  ->  x = x + 3
         * x -= 3  ->  x = x - 3
         * x *= 3  ->  x = x * 3
         * x /= 3  ->  x = x / 3
         * x %= 3  ->  x = x % 3
         * x &= 3  ->  x = x & 3
         * x |= 3  ->  x = x | 3
         * x ^= 3  ->  x = x ^ 3
         * x >>= 3 ->  x = x >> 3
         * x <<= 3 ->  x = x << 3
         */

// todo : 3.Comprasion Operator("==","!=",">","<",">=","<=")

        /*
         * a==b
         * a!=b
         * a>b
         * a<b
         * a>=b
         * a<=b
         */

// todo : 4. Logical Operator("&&","||","!")

        /*
         * logical and("&&") -> Return true if both ststements are true (x < 5 &&  x < 10)
         * Logical or("||")  -> Return true if one of the ststements true (x < 5 || x < 4)
         * Logical not("!")  -> Reverse the result, return false if the result is true (!(x < 5 && x < 10))
         */





        
    }
    
}
