/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GCKPB_PBMutableArray, GCKPB_PBArray;

@interface GCKPB_PBField : NSObject {

	int number_;
	GCKPB_PBMutableArray* mutableVarintList_;
	GCKPB_PBMutableArray* mutableFixed32List_;
	GCKPB_PBMutableArray* mutableFixed64List_;
	GCKPB_PBMutableArray* mutableLengthDelimitedList_;
	GCKPB_PBMutableArray* mutableGroupList_;

}

@property (nonatomic,retain,readonly) GCKPB_PBArray * varintList; 
@property (nonatomic,retain,readonly) GCKPB_PBArray * fixed32List; 
@property (nonatomic,retain,readonly) GCKPB_PBArray * fixed64List; 
@property (nonatomic,retain,readonly) GCKPB_PBArray * lengthDelimitedList; 
@property (nonatomic,retain,readonly) GCKPB_PBArray * groupList; 
@property (nonatomic,readonly) int number; 
-(unsigned long)serializedSize;
-(void)writeToOutput:(id)arg1 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg1 ;
-(unsigned long)serializedSizeAsMessageSetExtension;
-(GCKPB_PBArray *)varintList;
-(GCKPB_PBArray *)fixed32List;
-(GCKPB_PBArray *)fixed64List;
-(GCKPB_PBArray *)lengthDelimitedList;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(GCKPB_PBArray *)groupList;
-(int)number;
@end

