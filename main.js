'use strict'

function userSolution(stdinString) {
	// Write your code here
}

{
	let inputString = ''

	process.stdin.resume()
	process.stdin.setEncoding('utf-8')

	process.stdin.on('data', function (inputStdin) {
		inputString += inputStdin
	})

	process.stdin.on('end', function () {
		userSolution(inputString)
	})
}
