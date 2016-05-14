/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface FBNuxConfigurationProfile : NSObject <NSCoding> {

	NSArray* _nuxConfigurations;

}

@property (nonatomic,retain) NSArray * nuxConfigurations;              //@synthesize nuxConfigurations=_nuxConfigurations - In the implementation block
-(NSArray *)nuxConfigurations;
-(void)appendWithConfigurations:(id)arg1 ;
-(id)initWithRawConfigurations:(id)arg1 ;
-(id)_sortedConfigurationArrayFromRawConfigurations:(id)arg1 ;
-(id)_sortedConfigurationArrayByNuxID:(id)arg1 ;
-(id)initWithConfigurations:(id)arg1 ;
-(void)setNuxConfigurations:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

