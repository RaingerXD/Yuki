FROM nikolaik/python-nodejs:python3.9-nodejs18
COPY . /app/
WORKDIR /app/
RUN pip3 install --no-cache-dir --upgrade --requirement requirements.txt
CMD bash start
