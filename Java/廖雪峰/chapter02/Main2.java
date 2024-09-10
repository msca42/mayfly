/**
 * @description: 数据类型
 */
public class Main2 {
    public static void main(String[] args) {
        int i = 2147483647;
        int i2 = -2147483648;
        int i3 = 2_000_000_000;
        int i4 = 0xff0000;
        int i5 = 0b1000000000;

        long n1 = 9000000000000000000L;
        long n2 = 900;
        // int i6 = 900L;

        float f1 = 3.14f;
        float f2 = 3.14e38f;
        // float f3 = 1.0;

        double d = 1.79e308;
        double d2 = -1.79e308;
        double d3 = 4.9e-324;

        boolean b1 = true;
        boolean b2 = false;
        boolean isGreater = 5 > 3;
        int age = 12;
        boolean isAdult = age >= 18;

        char a = 'A';
        char zh = '中';
        System.err.println(a);
        System.err.println(zh);


        String s = "hello";
    }
}
