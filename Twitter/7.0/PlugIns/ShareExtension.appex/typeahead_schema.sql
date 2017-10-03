PRAGMA foreign_keys=OFF;
CREATE TABLE IF NOT EXISTS "users" (
"id" INTEGER PRIMARY KEY,
"score" INTEGER NOT NULL DEFAULT '0',
"username" TEXT UNIQUE,
"fullname" TEXT ,
"profile_url" TEXT,
"verified" INTEGER NOT NULL DEFAULT '0');
CREATE TABLE IF NOT EXISTS "user_tokens" (
"token" TEXT,
"user_id" INTEGER
);
CREATE INDEX IF NOT EXISTS user_tokens_index ON user_tokens(token);