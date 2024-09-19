const sendButton = document.getElementById('send-button');
const userInput = document.getElementById('user-input');
const assistantResponse = document.getElementById('assistant-response');

sendButton.addEventListener('click', () => {
	const userMessage = userInput.value;
	assistantResponse.textContent = `Assistant: ${userMessage}`;
});