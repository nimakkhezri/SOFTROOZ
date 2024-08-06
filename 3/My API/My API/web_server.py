from flask import Flask, request

app = Flask(__name__)

@app.route('/send_message', methods=['POST'])
def upload_file():
    if request.method == 'POST':
        message = request.get_data()
        print(f"Your message: {message}")
        return "Successfuly recived!\n"

if __name__ == '__main__':
    app.run(debug=True)
