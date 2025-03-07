//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.lang.*;
import java.io.*;

class Node
{
    int data;
    Node next, prev;
    Node(int data)
    {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}


class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            int n = Integer.parseInt(read.readLine());
            String str[] = read.readLine().trim().split(" ");
            Node head = null, tail = null;
            for(int i = 0; i < n; i++)
            {
                int data = Integer.parseInt(str[i]);
                if (head == null) 
                {
                    head = new Node(data);
                    tail = head;
                }
                else
                {
                    tail.next = new Node(data);
                    tail.next.prev=tail;
                    tail = tail.next;
                }
            }
                
            ArrayList<Integer> list = displayList(head);
            for(int i = 0;i<list.size();i++){
                System.out.print(list.get(i)+ " ");
            }
            System.out.println();
            for(int i = list.size()-1;i>=0;i--){
                System.out.print(list.get(i)+" ");
            }
            System.out.println();
                
        
System.out.println("~");
}
    }
    
    
// } Driver Code Ends

//User function Template for Java



/*
class Node
{
    int data;
    Node next, prev;
    Node(int data)
    {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}
*/

public static ArrayList<Integer> displayList(Node head)
{
    // your code here
    ArrayList<Integer> list1 = new ArrayList<>();
    ArrayList<Integer> list2 = new ArrayList<>();
    
    Node temp1 = head;
    
    while(temp1 != null)
    {
        list1.add(temp1.data);
        temp1 = temp1.next;
    }
    
    // Node temp2 = tail;
    
    // while(temp2 != null)
    // {
    //     list2.add(temp2.data);
    //     temp2 = temp2.prev;
    // }
    
    return list1;
    
}


//{ Driver Code Starts.
}


// } Driver Code Ends