import argparse

parser = argparse.ArgumentParser(description="这个程序用来演示参数处理")

parser.add_argument("-number1",type=int, default=10,help="输入一个数字")
parser.add_argument("-number2",type=int, default=20,help="输入一个数字")
args = parser.parse_args()
print(f"你输入的两数之和是 {args.number1 + args.number2}")