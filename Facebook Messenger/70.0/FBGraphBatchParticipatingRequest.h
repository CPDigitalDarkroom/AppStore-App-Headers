/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBFacebookAPIRequest.h>

@class NSString, NSDictionary;

@interface FBGraphBatchParticipatingRequest : FBFacebookAPIRequest {

	char _needsResultInBatch;
	NSString* _name;
	NSString* _continueIfTruthy;
	FBGraphBatchParticipatingRequest* _parentRequest;

}

@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * batchParameters; 
@property (assign,nonatomic) char needsResultInBatch;                                         //@synthesize needsResultInBatch=_needsResultInBatch - In the implementation block
@property (nonatomic,readonly) FBGraphBatchParticipatingRequest * parentRequest;              //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy) NSString * continueIfTruthy;                                       //@synthesize continueIfTruthy=_continueIfTruthy - In the implementation block
-(void)setParentRequest:(id)arg1 needsParentResult:(char)arg2 ;
-(NSDictionary *)batchParameters;
-(void)setNeedsResultInBatch:(char)arg1 ;
-(void)setContinueIfTruthy:(NSString *)arg1 ;
-(NSString *)continueIfTruthy;
-(char)needsResultInBatch;
-(FBGraphBatchParticipatingRequest *)parentRequest;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

