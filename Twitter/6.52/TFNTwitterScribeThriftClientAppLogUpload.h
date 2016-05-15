/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class TFNTwitterScribeThriftVersionedCommonHeader, TFNTwitterScribeThriftClientNetworkRequest, NSString;

@interface TFNTwitterScribeThriftClientAppLogUpload : NSObject <TBase, NSCoding> {

	char _commonHeaderIsSet;
	char _requestIsSet;
	char _logUrlIsSet;
	char _problemCategoryIsSet;
	char _problemDescriptionIsSet;
	char _screenNameIsSet;
	TFNTwitterScribeThriftVersionedCommonHeader* _commonHeader;
	TFNTwitterScribeThriftClientNetworkRequest* _request;
	NSString* _logUrl;
	NSString* _problemCategory;
	NSString* _problemDescription;
	NSString* _screenName;

}

@property (nonatomic,retain) TFNTwitterScribeThriftVersionedCommonHeader * commonHeader;              //@synthesize commonHeader=_commonHeader - In the implementation block
@property (nonatomic,readonly) char commonHeaderIsSet;                                                //@synthesize commonHeaderIsSet=_commonHeaderIsSet - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeThriftClientNetworkRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char requestIsSet;                                                     //@synthesize requestIsSet=_requestIsSet - In the implementation block
@property (nonatomic,copy) NSString * logUrl;                                                         //@synthesize logUrl=_logUrl - In the implementation block
@property (nonatomic,readonly) char logUrlIsSet;                                                      //@synthesize logUrlIsSet=_logUrlIsSet - In the implementation block
@property (nonatomic,copy) NSString * problemCategory;                                                //@synthesize problemCategory=_problemCategory - In the implementation block
@property (nonatomic,readonly) char problemCategoryIsSet;                                             //@synthesize problemCategoryIsSet=_problemCategoryIsSet - In the implementation block
@property (nonatomic,copy) NSString * problemDescription;                                             //@synthesize problemDescription=_problemDescription - In the implementation block
@property (nonatomic,readonly) char problemDescriptionIsSet;                                          //@synthesize problemDescriptionIsSet=_problemDescriptionIsSet - In the implementation block
@property (nonatomic,copy) NSString * screenName;                                                     //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,readonly) char screenNameIsSet;                                                  //@synthesize screenNameIsSet=_screenNameIsSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)problemCategory;
-(NSString *)problemDescription;
-(void)read:(id)arg1 ;
-(void)setCommonHeader:(TFNTwitterScribeThriftVersionedCommonHeader *)arg1 ;
-(TFNTwitterScribeThriftVersionedCommonHeader *)commonHeader;
-(char)commonHeaderIsSet;
-(char)requestIsSet;
-(void)setLogUrl:(NSString *)arg1 ;
-(void)setProblemCategory:(NSString *)arg1 ;
-(void)setProblemDescription:(NSString *)arg1 ;
-(id)initWithCommonHeader:(id)arg1 request:(id)arg2 logUrl:(id)arg3 problemCategory:(id)arg4 problemDescription:(id)arg5 screenName:(id)arg6 ;
-(NSString *)logUrl;
-(char)logUrlIsSet;
-(char)problemCategoryIsSet;
-(char)problemDescriptionIsSet;
-(char)screenNameIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(TFNTwitterScribeThriftClientNetworkRequest *)request;
-(void)validate;
-(void)write:(id)arg1 ;
-(void)setRequest:(TFNTwitterScribeThriftClientNetworkRequest *)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
@end

