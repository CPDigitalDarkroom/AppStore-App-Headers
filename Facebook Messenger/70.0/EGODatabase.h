/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSString, EGODatabaseStatement;

@interface EGODatabase : NSObject {

	NSString* databasePath;
	char opened;
	EGODatabaseStatement* beginStatement_;
	EGODatabaseStatement* rollbackStatement_;
	EGODatabaseStatement* commitStatement_;
	char _fileProtectionEnabled;
	sqlite3Ref handle;

}

@property (nonatomic,retain) EGODatabaseStatement * beginStatement; 
@property (nonatomic,retain) EGODatabaseStatement * rollbackStatement; 
@property (nonatomic,retain) EGODatabaseStatement * commitStatement; 
@property (nonatomic,readonly) sqlite3Ref sqliteHandle; 
-(id)initWithPath:(id)arg1 fileProtectionEnabled:(char)arg2 ;
-(char)executeMultiStatement:(id)arg1 ;
-(void)finalizeStatementsAndClose:(id)arg1 ;
-(char)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 error:(id*)arg3 ;
-(id)executeQueryStatement:(id)arg1 parameters:(id)arg2 ;
-(char)executeUpdateStatement:(id)arg1 parameters:(id)arg2 ;
-(char)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 inOperation:(id)arg3 error:(id*)arg4 ;
-(id)executeQuery:(id)arg1 parameters:(id)arg2 ;
-(id)executeQueryWithParameters:(id)arg1 ;
-(char)executeUpdate:(id)arg1 parameters:(id)arg2 ;
-(id)lastDBErrorForDomain:(id)arg1 ;
-(void)setBeginStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)beginStatement;
-(void)setRollbackStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)rollbackStatement;
-(void)setCommitStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)commitStatement;
-(char)executeSingleUpdateStatement:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(sqlite3Ref)sqliteHandle;
-(char)executeSingleUpdateStatement:(id)arg1 error:(id*)arg2 ;
-(void)interruptCurrentOperation;
-(char)executeUpdateWithParameters:(id)arg1 ;
-(id)executeQuery:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)open;
-(char)executeUpdate:(id)arg1 ;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(char)hadError;
-(char)finalizeStatement:(id)arg1 ;
@end

