import Node
import DFS

node1 = Node("A")
node2 = Node("B")
node3 = Node("C")
node4 = Node("D")
node5 = Node("E")

node1.adjacentList.append(node2)
node1.adjacentList.append(node3)
node2.adjacentList.append(node4)
node4.adjacentList.append(node5)

DFS.dfs(node1)
