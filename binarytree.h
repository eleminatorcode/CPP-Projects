template<typename T>
class Binarytreenode{
          public:
          T data;
          Binarytreenode*left;
          Binarytreenode*right;
          //constructor
          Binarytreenode(T data){
            this->data=data;
            left=NULL;
            right=NULL;

          }
          // Distructor
          ~Binarytreenode(){
            delete left;
            delete right;

          }
};
