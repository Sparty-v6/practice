if __name__ == "__main__":
	test_cases = int(input())
	for _ in range(0,test_cases):
		# js = []
		ts = int(input())
		# js = [range(1,ts)]
		js = [*range(1,ts+1,1)]

		# print(f"Value of tom {ts}")
		# print(f"Values of jerry {js}")

		for i  in js:
			if(i%2 != 0):
				js.remove(i)
		# print("After removing odd numebrs \n")
		# print(js)

		print(len(js))
		# print(f"The ways jerry can win : {len(js)}")