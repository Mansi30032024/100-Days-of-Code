class Node{
//remove pointer , nullptr becomes null , 
  int data;
  Node next;

  Node(int data1, Node next1){
    //access the class object 
   this.data = data1;
    this.next = next1;
  }

Node(int data1){
  this.data= data1;
  this.next=null;
}
};
public class LinkedList {
 
  public static void main(String[] args){
    int[] arr={3,2,4,21,30};
    Node y = new Node(arr[4]);
    System.out.println(y.data);// just using a dot 
  }
}