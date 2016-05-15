/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <TFNUI/TFNPlistSerialization.h>

@class NSString;

@interface TFNTwitterMediaImageInformation : NSObject <NSCoding, TFNPlistSerialization> {

	int _imageType;
	CGSize _size;

}

@property (assign,nonatomic) int imageType;                         //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setImageType:(int)arg1 ;
-(int)imageType;
@end

