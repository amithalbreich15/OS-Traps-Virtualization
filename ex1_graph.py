import plotly.graph_objects as go
import plotly.express as px
import numpy as np
import matplotlib.pyplot as plt


results = {
    'Locally': {
        'arithmetic': 1.77833,
        'empty': 2.93947,
        'trap': 382.805
    },
    'Inside Container': {
        'arithmetic': 2.00233,
        'empty': 2.96041,
        'trap': 382.829
    },
    'Inside VM': {
        'arithmetic': 143.663,
        'empty': 164.476,
        'trap': 963.279
    }
}

def draw_graph(results):
    # Prepare the data
    operations = ['Arithmetic Procedure', 'Empty Function', 'Trap']
    machine_names = ['Locally', 'Inside VM', 'Inside Container']
    times = []
    for machine in machine_names:
        machine_times = [results[machine]['arithmetic'],
                         results[machine]['empty'], results[machine]['trap']]
        times.append(machine_times)

    # Set the width of the bars
    bar_width = 0.2

    # Set the positions of the bars on the x-axis
    r1 = np.arange(len(times[0]))
    r2 = [x + bar_width for x in r1]
    r3 = [x + bar_width for x in r2]

    # Create a bar chart
    plt.bar(r1, times[0], width=bar_width, label=machine_names[0])
    plt.bar(r2, times[1], width=bar_width, label=machine_names[1])
    plt.bar(r3, times[2], width=bar_width, label=machine_names[2])

    # Set the axes labels and title
    plt.xlabel('Operations')
    plt.ylabel('Time (nanoseconds)')
    plt.title('Running Times Comparison')

    # Set the x-axis tick labels
    plt.xticks([r + bar_width for r in range(len(times[0]))], operations)

    plt.yscale('log')

    # Show the legend
    plt.legend()

    # Show the graph
    plt.show()

if __name__ == '__main__':
    draw_graph(results)