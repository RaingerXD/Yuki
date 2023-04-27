FROM nikolaik/python-nodejs:python3.11-nodejs19
RUN apt-get update -y && apt-get upgrade -y \
    && apt-get install -y --no-install-recommends ffmpeg \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
COPY . /app/
WORKDIR /app/
RUN pip install --no-cache-dir --upgrade --requirement requirements.txt
CMD bash start
