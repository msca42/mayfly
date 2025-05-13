public class Main4 {
    public static void main(String[] args) {
        boolean isGreater = 5 > 3; // true
        int age = 12;
        boolean isZero = age == 0; // false
        boolean isNonZero = !isZero; // true
        boolean isAdult = age >= 18; // false
        boolean isTeenager = age > 6 && age < 18; // true

        boolean b = 5 < 3;
        boolean result = b && (5 / 0 > 0); // 此处 5 / 0 不会报错
        System.out.println(result);

        int n = -100;
        int x = n >= 0 ? n : -n;
        System.out.println(x);
    }
}
