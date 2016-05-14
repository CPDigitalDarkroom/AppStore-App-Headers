/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessage, NSArray;

@interface FBStoryCreateInputDataAttachmentsGreetingCardSlides : FBGraphQLInput {

	NSString* _title;
	FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessage* _message;
	NSString* _slideType;
	NSArray* _photos;

}

@property (nonatomic,copy) NSString * title;                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * slideType;                                                              //@synthesize slideType=_slideType - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                                  //@synthesize photos=_photos - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)slideType;
-(void)setSlideType:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessage *)message;
-(void)setMessage:(FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessage *)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
@end

