/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTDataLoaderCancellationToken;
@class NSString, NSData, NSError, NSHashTable;

@interface SPTWidevineSession : NSObject {

	NSString* _ID;
	NSData* _pssh;
	unsigned _state;
	NSError* _lastError;
	id<SPTDataLoaderCancellationToken> _pendingMessage;
	NSHashTable* _subtasks;

}

@property (nonatomic,readonly) NSString * ID;                                                //@synthesize ID=_ID - In the implementation block
@property (nonatomic,readonly) NSData * pssh;                                                //@synthesize pssh=_pssh - In the implementation block
@property (nonatomic,readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * lastError;                                          //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) id<SPTDataLoaderCancellationToken> pendingMessage;              //@synthesize pendingMessage=_pendingMessage - In the implementation block
@property (nonatomic,retain) NSHashTable * subtasks;                                         //@synthesize subtasks=_subtasks - In the implementation block
-(id)initWithID:(id)arg1 pssh:(id)arg2 ;
-(void)resolveSubtasks;
-(void)keyMessageWasSent:(id)arg1 ;
-(void)keyInstalled;
-(id)subtaskWithCallback:(/*^block*/id)arg1 on:(id)arg2 ;
-(NSData *)pssh;
-(id<SPTDataLoaderCancellationToken>)pendingMessage;
-(void)setPendingMessage:(id<SPTDataLoaderCancellationToken>)arg1 ;
-(NSHashTable *)subtasks;
-(void)setSubtasks:(NSHashTable *)arg1 ;
-(id)init;
-(unsigned)state;
-(NSString *)ID;
-(void)closeWithError:(id)arg1 ;
-(NSError *)lastError;
@end

