public class Main {
  int age = 2;

  public static void main(String[] args) {
    Main MyCoelho1 = new Main();
	Main MyCoelho2 = new Main();
    MyCoelho2.age = 3;
    System.out.println(MyCoelho1.age);
	System.out.println(MyCoelho2.age);
  }
}