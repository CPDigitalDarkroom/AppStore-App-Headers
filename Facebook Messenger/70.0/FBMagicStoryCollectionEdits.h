/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface FBMagicStoryCollectionEdits : NSObject {

	NSMutableArray* _mutableEdits;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasEdits; 
-(void)insertEdit:(id)arg1 ;
-(id)rawEdits;
-(id)applyToCollection:(id)arg1 ;
-(char)hasEdits;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

