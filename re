services:
  - type: web
    plan: free
    name: RaingerXD
    env: python
    buildCommand: pip install -U -r requirements.txt
    startCommand: python3 server.py & python3 -m YukkiMusic
    repo: https://github.com/RaingerXD/Yukkki
    branch: master
    envVars:
      - key: API_ID 
        sync: false
      - key: API_HASH 
        sync: false
      - key: BOT_TOKEN 
        sync: false
      - key: MONGO_DB_URI
        sync: false
      - key: DURATION_LIMIT_MIN
        sync: false
      - key: LOG_GROUP_ID 
        sync: false
      - key: MUSIC_BOT_NAME 
        sync: false
      - key: OWNER_ID
        sync: false
      - key: MUST_JOIN
        sync: false
      - key: UPSTREAM_REPO
        sync: false
      - key: UPSTREAM_BRANCH 
        sync: false
      - key: GIT_TOKEN
        sync: false
      - key: AUTO_LEAVING_ASSISTANT
        sync: false
      - key: SPOTIFY_CLIENT_ID 
        sync: false
      - key: SPOTIFY_CLIENT_SECRET 
        sync: false
      - key: VIDEO_STREAM_LIMIT
        sync: false
      - key: CLEANMODE_DELETE_MINS
        sync: false
      - key: STRING_SESSION
        sync: false
      - key: STRING_SESSION2 
        sync: false
    autoDeploy: false
