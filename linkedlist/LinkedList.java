class Node{

  int data;
  Node next;
//by default, public

  Node(int data1, Node next1){
     this.data = data1;
     this.next= next1;
  }

  Node(int data1){
     this.data = data1;            
      this.next= null;
  }
};
public class LinkedList{
  public static void main(String[] args){
 int[] arr = {0, 2, 3, 1, 13};
 Node y = new Node(arr[0]);
 System.out.print(y.data);
  }

}