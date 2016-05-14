/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNImportedContactCard : NSObject <NSCopying> {

	NSArray* _contexts;
	NSString* _mainActionTitle;
	NSString* _partOfTitleToBold;
	NSString* _primaryAuxiliaryActionTitle;
	NSString* _userId;
	NSString* _secondaryAuxiliaryActionTitle;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * contexts;                                    //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * mainActionTitle;                            //@synthesize mainActionTitle=_mainActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * partOfTitleToBold;                          //@synthesize partOfTitleToBold=_partOfTitleToBold - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAuxiliaryActionTitle;                //@synthesize primaryAuxiliaryActionTitle=_primaryAuxiliaryActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryAuxiliaryActionTitle;              //@synthesize secondaryAuxiliaryActionTitle=_secondaryAuxiliaryActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
-(NSString *)partOfTitleToBold;
-(NSString *)mainActionTitle;
-(NSString *)primaryAuxiliaryActionTitle;
-(NSString *)secondaryAuxiliaryActionTitle;
-(id)initWithTitle:(id)arg1 partOfTitleToBold:(id)arg2 userId:(id)arg3 mainActionTitle:(id)arg4 primaryAuxiliaryActionTitle:(id)arg5 secondaryAuxiliaryActionTitle:(id)arg6 contexts:(id)arg7 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userId;
-(NSArray *)contexts;
@end

