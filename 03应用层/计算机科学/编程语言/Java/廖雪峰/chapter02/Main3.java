public class Main3 {
    public static void main(String[] args) {
        double x = 1.0 / 10;
        double y = 1 - 9.0 / 10;
        System.out.println(x);
        System.out.println(y);

        double r = Math.abs(x - y);
        if (r < 0.00001) {
        } else {
        }

        int n = 5;
        double d = 1.2 + 24.0 / n;
        System.out.println(d);

        int n1 = (int) 12.3; // 12
        int n2 = (int) 12.7; // 12
        int n3 = (int) -12.7; // -12
        int n4 = (int) (12.7 + 0.5); // 13
        int n5 = (int) 1.2e20; // 2147483647

    }
}
