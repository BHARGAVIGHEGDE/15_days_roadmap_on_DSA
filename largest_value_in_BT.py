# /*Given a binary tree,find the largest value in each level.
# The above problem can be solved using level order  binary tree traversal

# level order binary tree can be defined as:For each node, first, the node is visited and then it’s child nodes are put in a FIFO queue. Then again
#  the first node is popped out and the it’s child nodes are put in a FIFO queue and repeat until que becomes empty.


#  example:
#  input:4,9,2,3,5,7  in binary tree looks like        4                  in which there are 3 levels.
#                                                 9           2
#                                              3     5     7


# output:4,9,7


# explanation for example:let us set a queue by first adding root element to it,
#                         and a # is inserted after the value to represent that 4 is the end of the particular level
#                         and max value is set to 4,
#                         when v see #value v pop out the element 4 and max value is set to -1 and 
#                         9 and 2 are pushed into the queue.
#                         #NOTEs :whenever you see the # value print the max value


#                         now 9 and 2 are available in the queue,now check the condition if -1 max value is less than 9?
#                         the condition is true and max value is set to 9.
#                         pop out 9 and push its left and right child that is 3 and 5
#                         pop out 2,and add its child element that is 7,compare if 2< 9,true so push the max value.

#                         at last all the child element is compared 3,5,7 and 7 max value is pushed to the result

# result:the above method is not sufficient as the time complexity reduces and is not efficient
# solution:backtracking method can be applied for this problem to solve the given problem efficiently.

# steps to solve using backtracking:
# step 1: if root==null
#         return
#         if visiting node for first time
#         simply insert it
#         else
#         check the max condition and print the max value by comparision


# */


class solution:
    def solver(self,node,res,level):
        if node==None:
            return
        if len(res)==level:
            res.append(node.data)
        else:
            res[level]=max(res[level],node.data)
        self.solver(node.left,res,level+1)
        self.solver(node.right,res,level+1)


    def maximumValues(self,node):
        res=[]
        level=0
        solver(self,node,res,level)
        return res


