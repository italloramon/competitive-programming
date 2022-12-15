# How to use

Each algorithm have your own folder, in this folder you have the file *.cpp* with the code, a file *.txt* with a graph for test, and a *makefile*.

## Using the makefile

You can download this repo as a ZIP, enter the folder of any of these algorithms, lets take the Dijkstra, open the terminal and type:<br><br>
    ```make```

After this you should see a file *.out* with the name of the algorithm, in this case (***dijkstra.out***). Now lets execute this file, type:<br><br>
    ```./dijkstra.out -h```

<br>
<a href="https://ibb.co/PtJMkH6"><img src="https://i.ibb.co/x3wYZT7/mBbhT9w.png" alt="mBbhT9w" border="0"></a><br /><a target='_blank' href='https://pt-br.imgbb.com/'></a>
<br>
You should see a guide on how to use, note that, this flags are optional, so you can execute the script without any flag and type the graph manually if you want, or execute with other ways with you're more familiar with command lines. Here, I will assume that you want to use the script with the command lines, so lets take a view on how to use:


### Insert a input
- With this code, the script will input the file that you type, note that, you should follow a pattern, the graph needs the number of vertices (n), number of edges (m) and then, the m edges with the initial node to final node and the respective weight, you can open the files *.txt* and see how this works.

    ```./dijkstra.out -f <file.in>```

### Redirect the output
- You can redirect the output type:

    ```./dijkstra.out -o <file.out>```
   
 ### Initial vertice
 - You can indicate the inital vertice, if you dont type, the initial vertice will be 0.

    ```./dijkstra.out -i 0```
  

### Some examples
<a href="https://ibb.co/XyHnGy5"><img src="https://i.ibb.co/9wPxdw4/lpPizN6.png" alt="lpPizN6" border="0"></a>

<a href="https://ibb.co/92zJpJb"><img src="https://i.ibb.co/CvNqwqb/XQHVF3V.png" alt="XQHVF3V" border="0"></a>

<a href="https://ibb.co/HHPQxfx"><img src="https://i.ibb.co/NyNzmdm/fVOykYl.png" alt="fVOykYl" border="0"></a>
