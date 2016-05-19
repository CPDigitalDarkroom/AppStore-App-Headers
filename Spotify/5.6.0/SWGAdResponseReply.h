/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SWGObject.h>

@class NSString, NSNumber;

@interface SWGAdResponseReply : SWGObject {

	NSString* _responseID;
	NSString* _errorMessage;
	NSString* _errorCode;
	NSNumber* _success;

}

@property (nonatomic,retain) NSString * responseID;                //@synthesize responseID=_responseID - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,retain) NSString * errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSNumber * success;                   //@synthesize success=_success - In the implementation block
-(id)responseID:(id)arg1 errorMessage:(id)arg2 errorCode:(id)arg3 success:(id)arg4 ;
-(void)setResponseID:(NSString *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(id)asDictionary;
-(NSString *)responseID;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(NSString *)errorCode;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSNumber *)success;
-(void)setSuccess:(NSNumber *)arg1 ;
@end

