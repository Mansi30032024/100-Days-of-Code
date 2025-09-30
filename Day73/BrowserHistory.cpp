//DLL
class Node{
public: 
   string data;
   Node* next;
   Node* back;
   Node() : data(0), next(nullptr), back(nullptr){};
    Node(string x ) : data(x), next(nullptr), back(nullptr){}; 
    Node(string x, Node* next, Node* random) : data(0), next(next), back(random){};
};
class Browser
{
    Node* currPage;
    public:
    
    Browser(string &homepage)
    {
        // Write you code here
         currPage = new Node(homepage);
    }

    void visit(string &url)
    {
        // Write you code here
        Node* newNode = new Node(url);
        currPage->next = newNode;
        newNode->back = currPage;
        currPage = newNode;
    }

    string back(int steps)
    {
        // Write you code here
          while(steps){
            if(currPage->back) currPage = currPage->back ;
            else
             break;
            steps--;
        }
        return currPage->data;
    }

    string forward(int steps)
    {
        // Write you code here
         while(steps){
            if(currPage->next) currPage = currPage->next ;
            else break;
            steps--;
        }
  return currPage->data;
    }
    
};
