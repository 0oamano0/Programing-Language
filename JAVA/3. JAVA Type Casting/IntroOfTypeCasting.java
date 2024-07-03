//! Type casting 

//? There are two types of casting
//?    1.Widening Casting(automatic) -> converting smaller type to larger type
// todo : byte -> short -> char -> int -> long -> float -> double
//?    2.Narrowing Casting(manually) -> converting a larger type to a smaller type
// todo : double -> float -> long -> int -> char -> short -> byte

public class IntroOfTypeCasting {
    public static void main(String[] args) {
        

        //? Automatic conversion
        int num=9;
        double munum=num;
        System.out.println(munum);
        System.out.println("--------");

        //? Manual conversion
        int num2=(int) munum;
        System.out.println(num2);

    }
    
}
