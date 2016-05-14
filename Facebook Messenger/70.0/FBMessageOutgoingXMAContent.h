/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCopying;
@class NSArray, NSDictionary, NSObject, NSString;

@interface FBMessageOutgoingXMAContent : FBValueObject <NSCopying, NSCoding> {

	char _canSendViaMQTT;
	NSArray* _attachmentStyleList;
	NSDictionary* _requestParameters;
	NSObject*<NSCopying> _content;
	NSString* _contentType;

}

@property (nonatomic,copy,readonly) NSArray * attachmentStyleList;                 //@synthesize attachmentStyleList=_attachmentStyleList - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> content;                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentType;                        //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) char canSendViaMQTT;                                //@synthesize canSendViaMQTT=_canSendViaMQTT - In the implementation block
-(id)initWithAttachmentStyleList:(id)arg1 requestParameters:(id)arg2 content:(id)arg3 contentType:(id)arg4 canSendViaMQTT:(char)arg5 ;
-(NSArray *)attachmentStyleList;
-(char)canSendViaMQTT;
-(NSString *)contentType;
-(NSObject*<NSCopying>)content;
-(NSDictionary *)requestParameters;
@end

